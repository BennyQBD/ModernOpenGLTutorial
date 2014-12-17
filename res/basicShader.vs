#version 330

layout(location = 0) in vec3 position;
layout(location = 1) in  vec2 texCoord;
layout(location = 2) in  vec3 normal;

varying vec2 texCoord0;
varying vec3 normal0;

uniform mat4 MVP;
uniform mat4 Normal;

void main()
{
	gl_Position = MVP * vec4(position, 1.0);
	texCoord0 = texCoord;
	normal0 = (Normal * vec4(normal, 0.0)).xyz;
}
