#version 330

out vec4 color;

varying vec2 texCoord0;
varying vec3 normal0;

uniform sampler2D sampler;
uniform vec3 lightDirection;

void main()
{
	color = texture2D(sampler, texCoord0) * 
		clamp(dot(-lightDirection, normal0), 0.0, 1.0);
}
